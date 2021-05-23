/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface WBSForYouTopic : NSObject

{
    NSString *_title;
    NSString *_identifier;
    NSArray *_associatedTopics;
    NSDate *_relevancyDate;
    unsigned long long _source;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) NSArray *associatedTopics;
@property (nonatomic, readonly) NSDate *relevancyDate;
@property (nonatomic) unsigned long long source;

- (id)initWithTitle:(id)arg1 identifier:(id)arg2 relevancyDate:(id)arg3 source:(unsigned long long)arg4;

@end
