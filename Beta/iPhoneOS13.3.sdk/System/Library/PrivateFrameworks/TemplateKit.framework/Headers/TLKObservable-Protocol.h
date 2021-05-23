/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <TemplateKit/Swift-Protocol.h>

@protocol TLKObserver;

@protocol TLKObservable <Swift>

@property (weak) id <TLKObserver> observer;

@end
