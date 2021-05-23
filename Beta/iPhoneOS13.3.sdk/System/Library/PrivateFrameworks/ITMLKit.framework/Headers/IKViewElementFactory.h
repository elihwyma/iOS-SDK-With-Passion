/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElementRegistry, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject

{
    struct {
        unsigned int sparse:1;
        unsigned int parsingUpdatedTree:1;
        unsigned int parsingReorderedSiblings:1;
        unsigned int parsingPartOfPrototype:1;
    } _parsingFlags;
    IKViewElementRegistry *_elementRegistry;
    IKViewElementStyleFactory *_styleFactory;
}

@property (nonatomic, getter=isSparse) _Bool sparse;
@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory;

+ (void)initialize;
+ (_Bool)elementsForDocumentElement:(id)arg1 context:(id)arg2;
+ (Class)elementClassByTagName:(id)arg1;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;
+ (_Bool)isDependentByTagName:(id)arg1;

- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;
- (Class)elementClassByTagName:(id)arg1;
- (unsigned long long)elementTypeByTagName:(id)arg1;
- (id)initWithElementRegistry:(id)arg1;

@end
