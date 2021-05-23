/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class WBWebsiteDataRecord;

@interface WBSettingsTask : NSObject

{
    long long _taskType;
    WBWebsiteDataRecord *_websiteDataRecord;
}

@property (nonatomic, readonly) long long taskType;
@property (nonatomic, readonly) WBWebsiteDataRecord *websiteDataRecord;

+ (id)taskWithType:(long long)arg1;
+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1;

- (id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2;

@end
