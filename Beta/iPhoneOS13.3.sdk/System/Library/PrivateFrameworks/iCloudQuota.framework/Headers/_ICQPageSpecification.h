/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _ICQPageSpecification : NSObject

{
    _Bool _hasCancelButtonForBack;
    NSString *_pageIdentifier;
    NSString *_pageTitle;
    NSString *_pageClassIdentifier;
}

@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSString *pageTitle;
@property (nonatomic) _Bool hasCancelButtonForBack;
@property (retain, nonatomic) NSString *pageClassIdentifier;

- (id)debugDescription;
- (id)copyWithBindings:(id)arg1;

@end
