/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionCorrectionInfo : NSObject

{
    int _alternativeSelectionCount;
    int _characterModificationCount;
    int _characterInsertionCount;
    int _characterDeletionCount;
    int _characterSubstitutionCount;
    NSString *_correctedText;
}

@property (nonatomic) int alternativeSelectionCount;
@property (nonatomic) int characterModificationCount;
@property (nonatomic) int characterInsertionCount;
@property (nonatomic) int characterDeletionCount;
@property (nonatomic) int characterSubstitutionCount;
@property (copy, nonatomic) NSString *correctedText;

@end
