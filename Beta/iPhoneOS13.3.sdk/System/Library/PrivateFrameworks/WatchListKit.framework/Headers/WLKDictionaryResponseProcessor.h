/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject

{
    NSString *_dictionaryKeyPath;
    Class _objectClass;
}

@property (copy, nonatomic) NSString *dictionaryKeyPath;
@property (retain, nonatomic) Class objectClass;

- (id)processResponseData:(id)arg1 error:(id *)arg2;
- (id)processResponseData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
