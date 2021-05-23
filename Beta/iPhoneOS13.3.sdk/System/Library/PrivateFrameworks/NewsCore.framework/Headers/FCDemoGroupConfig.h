/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSString;

@interface FCDemoGroupConfig : NSObject <Swift>

{
    unsigned long long _demoGroupType;
    NSString *_topicID;
    NSArray *_articleIDs;
}

@property (nonatomic, readonly) unsigned long long demoGroupType;
@property (copy, nonatomic, readonly) NSString *topicID;
@property (copy, nonatomic, readonly) NSArray *articleIDs;
@property (copy, nonatomic, readonly) NSArray *tagIDs;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
