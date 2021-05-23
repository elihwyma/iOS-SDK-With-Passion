/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
 */

#import <NSString.h>

@interface NSString (DAKeychainAdditions)

+ (id)da_newGUID;
+ (id)da_new64ByteGUID;

- (id)stringByURLQuoting;
- (id)da_appendSlashIfNeeded;
- (id)da_stringByAddingPercentEscapesForUsername;
- (id)da_stringByRemovingPercentEscapesForUsername;
- (id)da_removeSlashIfNeeded;
- (id)da_stringByURLEscapingPathComponent;
- (_Bool)da_hasPrefixCaseInsensitive:(id)arg1;
- (id)da_trimWhiteSpace;
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;

@end
