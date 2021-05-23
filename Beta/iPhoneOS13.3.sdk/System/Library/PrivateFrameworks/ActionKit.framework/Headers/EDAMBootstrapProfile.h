/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMBootstrapSettings, NSString;

@interface EDAMBootstrapProfile : FATObject

{
    NSString *_name;
    EDAMBootstrapSettings *_settings;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) EDAMBootstrapSettings *settings;

+ (id)structName;
+ (id)structFields;

@end
