/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol NFTagA, NFTagB, NFTagF;

__attribute__((visibility("hidden")))
@interface WKMockNFTag : NSObject

{
    unsigned int _type;
    struct RetainPtr<NSData> _tagID;
    unsigned int _technology;
    unsigned int _ndefAvailability;
    NSData *_AppData;
    NSData *_UID;
    unsigned long long _ndefMessageSize;
    unsigned long long _ndefContainerSize;
    id <NFTagA> _tagA;
    id <NFTagB> _tagB;
    id <NFTagF> _tagF;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) unsigned int technology;
@property (copy, nonatomic, readonly) NSData *tagID;
@property (copy, nonatomic, readonly) NSData *UID;
@property (nonatomic, readonly) unsigned int ndefAvailability;
@property (nonatomic, readonly) unsigned long long ndefMessageSize;
@property (nonatomic, readonly) unsigned long long ndefContainerSize;
@property (copy, nonatomic, readonly) NSData *AppData;
@property (nonatomic, readonly) id <NFTagA> tagA;
@property (nonatomic, readonly) id <NFTagB> tagB;
@property (nonatomic, readonly) id <NFTagF> tagF;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1 tagID:(id)arg2;
- (id)initWithNFTag:(id)arg1;
- (_Bool)isEqualToNFTag:(id)arg1;

@end
