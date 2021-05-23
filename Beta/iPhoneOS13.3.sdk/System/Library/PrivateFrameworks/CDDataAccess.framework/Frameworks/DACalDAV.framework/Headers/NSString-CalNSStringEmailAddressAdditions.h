/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSString.h>

@interface NSString (CalNSStringEmailAddressAdditions)

- (_Bool)hasMailto;
- (id)stringRemovingMailto;
- (_Bool)resemblesEmailAddress;
- (id)stringAddingMailto;

@end
