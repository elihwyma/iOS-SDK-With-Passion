/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIViewController;

@interface MiroPPT : NSObject

{
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
    UIViewController *_playerViewController;
}

@property (retain, nonatomic) NSString *currentTestName;
@property (retain, nonatomic) NSDictionary *currentTestOptions;
@property (retain, nonatomic) UIViewController *playerViewController;

+ (id)sharedInstance;

- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (_Bool)dismissAllModalViewControllers;
- (int)currentTestIterations;
- (int)currentTestOffset;
- (int)currentTestLength;
- (void)startedCurrentTest;
- (void)finishedCurrentTest;
- (void)finishedCurrentTestWithExtraResults:(id)arg1;
- (void)failedCurrentTest;

@end
