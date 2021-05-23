/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class EspressoFDOverfeatNetwork;

@interface EspressoDCNEspressoOverfeatDetector : NSObject

{
    int tileSizeScaleFactor;
    int tileDimension;
    int localFaceMerging;
    struct FaceList *face_list;
    EspressoFDOverfeatNetwork *_enet;
    double _confidenceThreshold;
    double _minBoundingBoxThreshold;
}

@property (retain, nonatomic) EspressoFDOverfeatNetwork *enet;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) double minBoundingBoxThreshold;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)commonInit;
- (id)getDescription;
- (id)initWithNetwork:(id)arg1;
- (id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2;
- (void)fillFaceList;
- (void)computeBBoxUsingProb:(shared_ptr_dc6ac1b7)arg1 box:(shared_ptr_dc6ac1b7)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5;
- (void)mergeFaceList;
- (double)compareObject:(id)arg1 withObject:(id)arg2 error:(id *)arg3;

@end
