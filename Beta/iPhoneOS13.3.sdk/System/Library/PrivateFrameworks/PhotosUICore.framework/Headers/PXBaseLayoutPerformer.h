/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXBaseLayoutPerformer : NSObject <Swift>

{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_392cfed4 layoutInput;
}

@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) NSArray *children;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

- (void)prepareForReuse;
- (struct CGSize)performLayout;

@end
