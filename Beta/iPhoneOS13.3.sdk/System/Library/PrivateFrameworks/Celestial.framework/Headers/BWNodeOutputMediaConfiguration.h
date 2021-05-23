/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFormatRequirements, NSArray, NSString;

@interface BWNodeOutputMediaConfiguration : NSObject

{
    NSString *_associatedAttachedMediaKey;
    BWFormatRequirements *_formatRequirements;
    NSArray *_indexesOfInputsWhichDrivesThisOutput;
    NSString *_attachedMediaKeyOfInputWhichDrivesThisOutput;
    int _passthroughMode;
    int _indexOfInputWhichDrivesThisOutput;
    int _owningNodeRetainedBufferCount;
    _Bool _providesPixelBufferPool;
    _Bool _performsAttachedMediaRemapping;
}

@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) _Bool providesPixelBufferPool;
@property (nonatomic) int passthroughMode;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (copy, nonatomic) NSArray *indexesOfInputsWhichDrivesThisOutput;
@property (nonatomic, readonly) _Bool performsAttachedMediaRemapping;
@property (copy, nonatomic) NSString *attachedMediaKeyOfInputWhichDrivesThisOutput;
@property (nonatomic) int owningNodeRetainedBufferCount;

- (id)init;
- (void)dealloc;
- (void)_setAssociatedAttachedMediaKey:(id)arg1;
- (_Bool)isDrivenByInputWithIndex:(unsigned long long)arg1;

@end
