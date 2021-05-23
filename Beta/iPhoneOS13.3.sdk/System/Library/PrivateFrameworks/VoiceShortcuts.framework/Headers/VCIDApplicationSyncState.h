/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <MTLModel.h>

@class NSDate, NSDictionary, NSString;

@interface VCIDApplicationSyncState : MTLModel

{
    NSString *_checksum;
    NSDate *_registeredDate;
}

@property (copy, nonatomic) NSString *checksum;
@property (copy, nonatomic) NSDate *registeredDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;

@end
