/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSURL, PSUIAppDescription;

__attribute__((visibility("hidden")))
@interface PSUIAppDescriptionStoreResponse : NSObject

{
    PSUIAppDescription *_partialAppDescription;
    NSURL *_iconURL;
    NSURL *_installURL;
}

@property (retain, nonatomic) PSUIAppDescription *partialAppDescription;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSURL *installURL;

@end
