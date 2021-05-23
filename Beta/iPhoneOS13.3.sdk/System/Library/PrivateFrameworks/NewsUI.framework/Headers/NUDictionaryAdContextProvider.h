/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface NUDictionaryAdContextProvider : NSObject <Swift>

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDictionary:(id)arg1;
- (id)adContextValueForKeyPath:(id)arg1;

@end
