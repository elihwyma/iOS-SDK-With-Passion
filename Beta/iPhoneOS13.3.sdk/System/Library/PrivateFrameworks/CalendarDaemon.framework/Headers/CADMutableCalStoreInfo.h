/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CADMutableCalStoreInfo : NSObject

{
    _Bool _isLocalStore;
    _Bool _isEnabled;
    int _rowID;
    NSString *_storeName;
    NSString *_accountIdentifier;
    NSString *_delegatedAccountOwnerAccountIdentifier;
}

@property (nonatomic) int rowID;
@property (nonatomic) _Bool isLocalStore;
@property (nonatomic) _Bool isEnabled;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *delegatedAccountOwnerAccountIdentifier;

@end
