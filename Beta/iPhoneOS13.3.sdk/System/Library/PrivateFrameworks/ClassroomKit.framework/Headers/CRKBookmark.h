/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CRKBookmark : NSObject

{
    NSString *_name;
    NSString *_urlString;
    NSArray *_childBookmarks;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSArray *childBookmarks;

+ (_Bool)supportsSecureCoding;
+ (id)bookmarkFromDMFBookmark:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isFolder;

@end
