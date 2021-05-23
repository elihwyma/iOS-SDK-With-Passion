/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSWPChangeSession;

@interface TSWPTestChangeSessionManager : NSObject

{
    TSWPChangeSession *_currentSession;
}

@property (nonatomic, readonly) _Bool isTrackingChanges;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)changeSessionAuthorCreatedWithCommand:(id *)arg1;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id *)arg1;

@end
