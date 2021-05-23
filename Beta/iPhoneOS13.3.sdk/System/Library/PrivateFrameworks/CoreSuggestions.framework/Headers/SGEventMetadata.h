/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SGEventMetadata : NSObject

{
    unsigned char _type;
    NSString *_categoryDescription;
    NSString *_originBundleId;
    double _confidence;
    NSArray *_schemaOrg;
    NSArray *_participants;
    NSArray *_eventActivities;
}

@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) NSString *categoryDescription;
@property (nonatomic, readonly) NSString *originBundleId;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSArray *schemaOrg;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly) NSArray *eventActivities;

+ (id)describeType:(unsigned char)arg1;
+ (id)eventMetadataFromEKEvent:(id)arg1;
+ (unsigned char)eventTypeFromString:(id)arg1;

- (id)jsonObject;
- (id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6;
- (id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6 eventActivities:(id)arg7;
- (id)toJsonString;

@end
