/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKCSSDeclarationTypeInfo : NSObject

{
    unsigned long long _type;
    NSString *_name;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *name;

- (id)initWithType:(unsigned long long)arg1 name:(id)arg2;

@end
