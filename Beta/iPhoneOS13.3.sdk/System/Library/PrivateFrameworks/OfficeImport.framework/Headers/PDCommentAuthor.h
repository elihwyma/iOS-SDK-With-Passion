/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : NSObject

{
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (id)init;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)id;
- (void)setId:(unsigned int)arg1;
- (id)initials;
- (unsigned int)colorIndex;
- (void)setColorIndex:(unsigned int)arg1;
- (void)setLastCommentIndex:(unsigned int)arg1;
- (void)setInitials:(id)arg1;
- (unsigned int)lastCommentIndex;

@end
