/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EMFPlayer, NSString;

__attribute__((visibility("hidden")))
@interface EMFReader : NSObject

{
    EMFPlayer *m_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)play:(id)arg1;
- (id)initWithEMFPlayer:(id)arg1;

@end
