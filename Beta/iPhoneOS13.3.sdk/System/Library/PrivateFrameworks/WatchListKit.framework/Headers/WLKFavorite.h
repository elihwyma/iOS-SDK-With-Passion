/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKFavorite : NSObject

{
    NSString *_id;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
