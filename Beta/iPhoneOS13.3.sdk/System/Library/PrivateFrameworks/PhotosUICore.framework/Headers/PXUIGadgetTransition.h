/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXOneUpPresentation;

@protocol PXGridPresentation;

@interface PXUIGadgetTransition : NSObject

{
    PXOneUpPresentation *_oneUpPresentation;
    id <PXGridPresentation> _gridPresentation;
}

@property (nonatomic, readonly) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, readonly) id <PXGridPresentation> gridPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOneUpPresentation:(id)arg1 gridPresentation:(id)arg2;

@end
