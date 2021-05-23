/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSData.h>

@interface NSData (FPFSHelpers)

+ (id)fp_dataWithLastUsedDate:(id)arg1;
+ (id)fp_dataWithFavoriteRank:(id)arg1;

- (_Bool)getFileIDFromXattr:(unsigned long long *)arg1 docID:(unsigned int *)arg2 genCount:(unsigned long long *)arg3;
- (id)fp_lastUsedDate;
- (id)fp_favoriteRank;

@end
