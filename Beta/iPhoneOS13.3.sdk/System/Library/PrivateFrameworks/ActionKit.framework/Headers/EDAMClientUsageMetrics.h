/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMClientUsageMetrics : FATObject

{
    NSNumber *_sessions;
    NSString *_subjectConsumerKey;
    NSString *_subjectConsumerSecret;
}

@property (retain, nonatomic) NSNumber *sessions;
@property (retain, nonatomic) NSString *subjectConsumerKey;
@property (retain, nonatomic) NSString *subjectConsumerSecret;

+ (id)structName;
+ (id)structFields;

@end
