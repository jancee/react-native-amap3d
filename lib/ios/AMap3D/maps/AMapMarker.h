#import "AMapView.h"
#import "AMapCallout.h"

@interface AMapMarker : UIView

@property(nonatomic, copy) RCTBubblingEventBlock onPress;
@property(nonatomic, copy) RCTBubblingEventBlock onInfoWindowPress;
@property(nonatomic, copy) RCTBubblingEventBlock onAmapDragStart;
@property(nonatomic, copy) RCTBubblingEventBlock onAmapDrag;
@property(nonatomic, copy) RCTBubblingEventBlock onAmapDragEnd;

- (MAAnnotationView *)annotationView;
- (MAPointAnnotation *)annotation;
- (void)setActive:(BOOL)active;
- (void)setMapView:(AMapView *)mapView;
- (void)lockToScreen:(int)x y:(int)y;

@end
