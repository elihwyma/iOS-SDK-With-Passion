/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject

{
    NSMutableDictionary *_polarityMapsByLanguageID;
}

@property (retain) NSMutableDictionary *polarityMapsByLanguageID;

- (id)init;

@end
