/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVTPuppetStore : NSObject

{
    NSArray *_puppetRecords;
}

@property (copy, nonatomic) NSArray *puppetRecords;

+ (id)createPuppetRecords;

- (id)initWithEnvironment:(id)arg1;
- (id)avatarPuppetsForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)avatarsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (void)loadPuppetRecordsIfNeeded;
- (id)allAvatarPuppetsWithError:(id *)arg1;
- (id)allAvatarPuppetsExcluding:(id)arg1 error:(id *)arg2;
- (id)allPuppetRecords;

@end
