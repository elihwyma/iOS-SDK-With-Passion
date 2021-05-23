/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface RPStoreInfo : NSObject

{
    NSString *_bundleID;
    NSString *_appName;
    NSString *_author;
    NSString *_itemURL;
    NSArray *_categories;
    NSArray *_artworkDictionary;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *itemURL;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *artworkDictionary;

- (id)dictionary;

@end
