/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSUserActivity.h>

@class NFCNDEFMessage;

@interface NSUserActivity (CoreNFC)

@property (nonatomic, readonly) NFCNDEFMessage *ndefMessagePayload;

- (void)setNdefMessagePayload:(id)arg1;

@end
