/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer

{
    NSString *_maxResourceSize;
    NSString *_maxImageSize;
    NSURL *_meCardURL;
    _Bool _isGuardianRestricted;
}

@property (retain, nonatomic) NSString *maxResourceSize;
@property (retain, nonatomic) NSString *maxImageSize;
@property (retain, nonatomic) NSURL *meCardURL;
@property (nonatomic) _Bool isGuardianRestricted;
@property (nonatomic, readonly) _Bool isAddressBook;
@property (nonatomic, readonly) _Bool isSharedAddressBook;
@property (nonatomic, readonly) _Bool isSearchAddressBook;

+ (id)copyPropertyMappingsForParser;

- (id)description;
- (void)applyParsedProperties:(id)arg1;

@end
