/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, NSUserActivity;

@interface SGEventActivity : NSObject

{
    unsigned char _type;
    NSString *_teamIdentifier;
    NSUserActivity *_userActivity;
    double _validStartDate;
    double _validEndDate;
}

@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) double validStartDate;
@property (nonatomic, readonly) double validEndDate;

+ (id)describeType:(unsigned char)arg1;
+ (unsigned char)typeForString:(id)arg1;

- (id)initWithDictionary:(id)arg1;
- (id)jsonObject;
- (id)initWithTeamIdentifier:(id)arg1 type:(unsigned char)arg2 userActivity:(id)arg3 validStartDate:(double)arg4 validEndDate:(double)arg5;

@end
