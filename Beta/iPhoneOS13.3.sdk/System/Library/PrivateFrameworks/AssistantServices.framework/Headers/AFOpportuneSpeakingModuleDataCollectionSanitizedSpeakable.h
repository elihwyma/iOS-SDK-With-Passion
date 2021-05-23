/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface AFOpportuneSpeakingModuleDataCollectionSanitizedSpeakable : NSObject

{
    NSString *_identifier;
    NSDate *_date;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *date;

- (id)initWithDate:(id)arg1;
- (_Bool)isOlderThan:(id)arg1;

@end
