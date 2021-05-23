/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface NPKStandaloneProvisioningNumericEntryCoordinator : NSObject

{
    NSArray *_providedFields;
    NSMutableArray *_completedFields;
    unsigned long long _currentIndex;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) NSArray *providedFields;
@property (retain, nonatomic) NSMutableArray *completedFields;
@property (nonatomic) unsigned long long currentIndex;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)invalidate;
- (void)requestNumericInputForFields:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showCurrentPasscodePromptOrComplete;
- (void)_invokeCompletionHandler;
- (void)_showNextPasscodePromptOrComplete;

@end
