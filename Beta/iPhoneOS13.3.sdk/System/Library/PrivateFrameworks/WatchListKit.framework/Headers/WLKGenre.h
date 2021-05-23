/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKGenre : NSObject

{
    NSString *_uniqueID;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *uniqueID;
@property (copy, nonatomic, readonly) NSString *name;

+ (id)genresWithDictionaries:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
