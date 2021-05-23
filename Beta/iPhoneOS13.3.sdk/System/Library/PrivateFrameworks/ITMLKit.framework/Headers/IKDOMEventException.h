/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@interface IKDOMEventException : IKJSObject

{
    long long code;
}

@property (nonatomic) long long code;

+ (id)exceptionWithAppContext:(id)arg1 code:(long long)arg2;

@end
