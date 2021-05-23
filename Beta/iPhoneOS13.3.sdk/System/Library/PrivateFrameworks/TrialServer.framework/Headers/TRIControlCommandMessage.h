/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSObject.h>

@interface TRIControlCommandMessage : NSObject

+ (id)commandFromMessage:(struct NSDictionary *)arg1;
+ (id)objectFromMessage:(struct NSDictionary *)arg1;
+ (struct NSDictionary *)messageFromObject:(id)arg1;
+ (struct NSDictionary *)messageFromCommand:(id)arg1;

@end
