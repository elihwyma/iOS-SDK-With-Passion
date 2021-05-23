/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString;

@protocol NSObject;

@interface NMSObfuscatableDescriptionItem : NSObject

{
    _Bool _obfuscated;
    NSString *_format;
    id <NSObject> _value;
}

@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) id <NSObject> value;
@property (nonatomic) _Bool obfuscated;

- (id)initWithFormat:(id)arg1 value:(id)arg2 obfuscated:(_Bool)arg3;

@end
