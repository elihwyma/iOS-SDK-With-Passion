/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, PHMemory;

@interface PXMemoriesInlineProblemReporter : NSObject

{
    PHMemory *_memory;
    NSArray *_features;
}

@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSArray *features;

- (id)_headerText;
- (id)initWithMemory:(id)arg1 features:(id)arg2;
- (id)feedbackMailViewController;
- (id)_reportStringForFeatures;
- (id)_infoText;
- (id)_disclaimerText;

@end
