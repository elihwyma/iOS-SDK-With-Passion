/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface IKJSManagedArray : NSObject

{
    id _ownerObject;
    NSArray *_managedArray;
}

@property (retain, nonatomic) id ownerObject;
@property (retain, nonatomic) NSArray *managedArray;

- (void)dealloc;
- (id)initWithArray:(id)arg1 ownerObject:(id)arg2;
- (id)jsValuesWithContext:(id)arg1;

@end
