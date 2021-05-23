/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityExportContext : NSObject

{
    NSMutableDictionary *_storeNameToStoreExportContext;
    NSMutableDictionary *_ubiquityRootPathToStack;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    _Bool _useLocalStorage;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic) _Bool useLocalStorage;

- (void)dealloc;
- (id)description;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)storeExportContextForStoreName:(id)arg1;
- (id)storeExportContextForStore:(id)arg1;

@end
