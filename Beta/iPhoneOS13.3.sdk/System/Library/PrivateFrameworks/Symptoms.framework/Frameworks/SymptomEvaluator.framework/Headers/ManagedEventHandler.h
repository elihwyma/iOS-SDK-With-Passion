/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ManagedEventHandler : NSObject

{
    char *_notifyString;
    int _NotifyToken;
    char *_transportMessageString;
    NSMutableArray *_managedEvents;
}

+ (void)initialize;
+ (id)getHandlerByName:(id)arg1;

- (id)description;
- (id)initWithName:(id)arg1;
- (void)didReceiveSyndrome:(id)arg1;
- (id)feedbackForEventId:(unsigned long long)arg1;
- (void)sendNotificationWithId:(unsigned long long)arg1;
- (void)populateReply:(id)arg1 ForId:(unsigned long long)arg2 Count:(unsigned long long)arg3;

@end
