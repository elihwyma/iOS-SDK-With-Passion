/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <Foundation/NSObject.h>

@class AFSiriTask, NSMutableDictionary, NSString, STGenericIntentRequest;

@interface STGenericIntent : NSObject

{
    _Bool _appInForeground;
    _Bool _isLaunch;
    _Bool _handled;
    _Bool _finishedState;
    NSString *_name;
    NSString *_utterance;
    NSString *_attributes;
    NSMutableDictionary *_parameters;
    AFSiriTask *_siriTask;
    STGenericIntentRequest *_intentRequest;
}

@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (retain, nonatomic) AFSiriTask *siriTask;
@property (retain, nonatomic) STGenericIntentRequest *intentRequest;
@property (nonatomic) _Bool handled;
@property (nonatomic) _Bool finishedState;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *attributes;
@property (nonatomic) _Bool appInForeground;
@property (nonatomic) _Bool isLaunch;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)finished;
- (void)handleWithProgress:(long long)arg1;
- (id)getDateRangeParameter:(id)arg1;
- (id)getTopicParameter:(id)arg1;
- (id)getPersonParameter:(id)arg1;
- (id)getGroupParameter:(id)arg1;
- (id)getPlacesParameter:(id)arg1;
- (void)addParam:(id)arg1 withValue:(id)arg2;

@end
