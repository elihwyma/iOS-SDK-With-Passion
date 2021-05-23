/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface CUIKUserActivity : NSObject

{
    unsigned long long _type;
    NSString *_activityTitle;
    NSString *_activitySubtitle;
    NSSet *_activityKeywords;
    unsigned long long _version;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSString *activityTitle;
@property (retain, nonatomic) NSString *activitySubtitle;
@property (retain, nonatomic) NSSet *activityKeywords;

+ (unsigned long long)_typeFromDictionary:(id)arg1;
+ (unsigned long long)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (_Bool)_boolFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (id)activityForDictionary:(id)arg1;
+ (id)activityForActivity:(id)arg1;
+ (long long)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)updateActivity:(id)arg1;

@end
