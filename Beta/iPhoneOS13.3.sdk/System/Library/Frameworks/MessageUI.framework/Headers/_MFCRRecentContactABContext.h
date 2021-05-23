/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@interface _MFCRRecentContactABContext : NSObject

{
    void *_existingPerson;
    void *_interimPerson;
    int _identifier;
}

- (id)init;
- (void)dealloc;
- (int)identifier;
- (void)setIdentifier:(int)arg1;
- (void *)existingPerson;
- (void)setExistingPerson:(void *)arg1;
- (void *)interimPerson;
- (void)setInterimPerson:(void *)arg1;

@end
