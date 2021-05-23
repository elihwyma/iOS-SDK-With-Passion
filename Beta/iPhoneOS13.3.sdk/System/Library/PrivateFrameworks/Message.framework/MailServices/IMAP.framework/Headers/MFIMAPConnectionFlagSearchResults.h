/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface MFIMAPConnectionFlagSearchResults : NSObject

{
    NSMutableDictionary *_uidsWithFlagMaskSet;
    NSMutableDictionary *_uidsWithoutFlagMaskSet;
}

- (id)init;
- (id)description;
- (void)cacheStateForUIDs:(id)arg1 mask:(unsigned long long)arg2 existenceSetsFlag:(_Bool)arg3;
- (id)copyResponseForUID:(unsigned long long)arg1;
- (id)_indexSetFromUIDs:(id)arg1;
- (unsigned long long)_flagsForUID:(unsigned long long)arg1;

@end
