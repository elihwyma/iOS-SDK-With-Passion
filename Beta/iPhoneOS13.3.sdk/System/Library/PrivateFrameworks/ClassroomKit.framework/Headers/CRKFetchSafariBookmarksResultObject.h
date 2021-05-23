/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchSafariBookmarksResultObject : CATTaskResultObject

{
    NSArray *_bookmarks;
}

@property (copy, nonatomic) NSArray *bookmarks;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
