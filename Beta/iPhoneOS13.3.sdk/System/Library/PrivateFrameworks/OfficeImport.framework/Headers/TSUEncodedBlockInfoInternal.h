/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUEncodedBlockInfoInternal : NSObject

{
    unsigned long long _encodedLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) unsigned long long decodedLength;

- (_Bool)isEqual:(id)arg1;
- (id)initWithEncodedLength:(unsigned long long)arg1;

@end
