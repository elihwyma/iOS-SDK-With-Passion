/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class CNContactStore, CNMonogrammer, NSDictionary;

@interface HUContactManager : NSObject

{
    NSDictionary *_cachedContactByEmails;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
    double _monogramDiameter;
}

@property (copy, nonatomic) NSDictionary *cachedContactByEmails;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (retain, nonatomic) CNMonogrammer *monogrammer;
@property (nonatomic) double monogramDiameter;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)contactStoreDidChange:(id)arg1;
- (id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2;

@end
