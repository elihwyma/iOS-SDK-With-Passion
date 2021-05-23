/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject

{
    NSArray *_bookmarks;
}

@property (copy, nonatomic, readonly) NSArray *bookmarks;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(unsigned long long)arg3;
- (id)initWithBookmarks:(id)arg1;

@end
