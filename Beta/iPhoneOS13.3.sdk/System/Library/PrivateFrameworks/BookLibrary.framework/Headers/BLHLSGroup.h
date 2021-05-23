/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BLHLSGroup : NSObject

{
    NSString *_groupID;
    NSArray *_media;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSArray *media;

- (id)description;
- (id)initWithGroupID:(id)arg1 media:(id)arg2;

@end
