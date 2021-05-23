/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TUMetadataItem : NSObject

{
    NSMutableDictionary *_callMetadata;
}

@property (nonatomic, readonly) NSMutableDictionary *callMetadata;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;

- (id)init;
- (id)description;
- (id)metadataForProvider:(Class)arg1;
- (void)setMetadata:(id)arg1 forProvider:(Class)arg2;

@end
